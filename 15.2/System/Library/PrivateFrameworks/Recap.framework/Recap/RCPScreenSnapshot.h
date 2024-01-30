@class UIImage;

@interface RCPScreenSnapshot : NSObject

@property (nonatomic) long long index;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) UIImage *snapshotImage;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
