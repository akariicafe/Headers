@class NSString;
@protocol CRKASMRosterProviding;

@interface CRKASMRosterBackedAppleIDProvider : NSObject <CRKAppleIDProviding>

@property (readonly, nonatomic) id<CRKASMRosterProviding> rosterProvider;
@property (readonly, copy, nonatomic) NSString *appleID;

- (void).cxx_destruct;
- (id)initWithRosterProvider:(id)a0;

@end
