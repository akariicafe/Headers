@class UIImage;

@interface RCPScreenSnapshot : NSObject

@property (nonatomic) long long index;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) UIImage *snapshotImage;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
