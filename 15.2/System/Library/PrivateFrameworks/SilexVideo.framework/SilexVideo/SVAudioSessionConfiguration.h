@class NSString;

@interface SVAudioSessionConfiguration : NSObject

@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *mode;
@property (nonatomic) unsigned long long routeSharingPolicy;

- (BOOL)isEqualToConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)initWithCategory:(id)a0 mode:(id)a1 policy:(unsigned long long)a2;

@end
