@class NSString;

@interface BRCFSEvent : NSObject

@property (retain, nonatomic) NSString *path;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) unsigned long long eventID;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0 flags:(unsigned int)a1 eventID:(unsigned long long)a2;

@end
