@class NSString;
@protocol PARResultFactory;

@interface PARSessionConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *userAgent;
@property (readonly) id<PARResultFactory> factory;
@property BOOL dontPreloadImages;
@property BOOL enablePersonalizedRanking;
@property BOOL parsecEnabled;

+ (id)defaultSessionConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)initWithId:(id)a0 userAgent:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithId:(id)a0 userAgent:(id)a1 factory:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
