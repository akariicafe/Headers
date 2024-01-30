@class NSString;

@interface SVAudioSessionConfiguration : NSObject

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *mode;
@property (nonatomic) unsigned long long routeSharingPolicy;

- (void).cxx_destruct;
- (BOOL)isEqualToConfiguration:(id)a0;
- (id)initWithCategory:(id)a0 mode:(id)a1 policy:(unsigned long long)a2;

@end
