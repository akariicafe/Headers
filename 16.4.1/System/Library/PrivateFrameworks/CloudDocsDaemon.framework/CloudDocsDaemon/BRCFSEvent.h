@class NSString;

@interface BRCFSEvent : NSObject

@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) unsigned long long eventID;

- (id)initWithPath:(id)a0 flags:(unsigned int)a1 eventID:(unsigned long long)a2;
- (void).cxx_destruct;

@end
