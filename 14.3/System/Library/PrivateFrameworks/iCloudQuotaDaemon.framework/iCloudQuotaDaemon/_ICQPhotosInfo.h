@interface _ICQPhotosInfo : NSObject

@property (nonatomic) unsigned long long photoCount;
@property (nonatomic) unsigned long long videoCount;

+ (id)mockCount:(id)a0;
+ (void)getInfoWithCompletion:(id /* block */)a0;

@end
