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

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithId:(id)a0 userAgent:(id)a1 factory:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)initWithId:(id)a0 userAgent:(id)a1;

@end
