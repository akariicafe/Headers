@class NSExpression, NSString;

@interface NSPropertyTransform : NSObject <NSSecureCoding> {
    NSExpression *_valueExpression;
    NSString *_propertyName;
    NSPropertyTransform *_prerequisiteTransform;
    BOOL _replaceMissingValueOnly;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPropertyName:(id)a0 valueExpression:(id)a1;

@end
