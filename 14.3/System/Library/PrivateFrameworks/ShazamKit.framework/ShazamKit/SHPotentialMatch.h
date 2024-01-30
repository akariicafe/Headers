@class NSArray, SHSignature;

@interface SHPotentialMatch : NSObject

@property (readonly, nonatomic) NSArray *mediaItems;
@property (readonly, nonatomic) SHSignature *signature;

- (void).cxx_destruct;
- (id)initWithSignature:(id)a0 representingMediaItems:(id)a1;

@end
