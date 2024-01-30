@class NSString;
@protocol SNMLModel;

@interface SNClassifierVariant : NSObject <NSCopying, NSSecureCoding> {
    long long _type;
    id<SNMLModel> _mlModel;
    NSString *_classifierIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
