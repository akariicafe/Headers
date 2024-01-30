@class NSNumber;

@interface FBKDeletedItem : NSObject

@property (retain, nonatomic) NSNumber *remoteID;
@property (nonatomic) unsigned long long type;

- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
