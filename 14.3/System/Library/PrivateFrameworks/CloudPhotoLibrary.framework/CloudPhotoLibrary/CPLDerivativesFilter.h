@interface CPLDerivativesFilter : NSObject <NSSecureCoding> {
    BOOL _dropForImages;
    BOOL _dropForVideos;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)dropDerivativesForImages:(BOOL)a0 videos:(BOOL)a1;

- (id)init;
- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initDroppingDerivativesForImages:(BOOL)a0 videos:(BOOL)a1;
- (BOOL)mightDropSomeDerivativesForSourceType:(unsigned long long)a0 isVideo:(BOOL)a1;
- (BOOL)shouldDropDerivativeOfType:(unsigned long long)a0 fromSourceType:(unsigned long long)a1 isVideo:(BOOL)a2;

@end
