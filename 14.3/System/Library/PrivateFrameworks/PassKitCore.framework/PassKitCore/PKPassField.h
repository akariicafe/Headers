@class NSString, NSDictionary;

@interface PKPassField : NSObject <NSSecureCoding, NSCopying> {
    NSString *_value;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *label;
@property (readonly, weak) NSString *value;
@property (nonatomic) unsigned long long row;
@property (copy, nonatomic) id unformattedValue;
@property (copy, nonatomic) NSString *changeMessage;
@property (nonatomic) long long textAlignment;
@property (nonatomic) unsigned long long dataDetectorTypes;
@property (copy, nonatomic) NSDictionary *semantics;
@property (nonatomic) long long cellStyle;
@property (nonatomic) long long foreignReferenceType;
@property (retain, nonatomic) NSString *foreignReferenceIdentifier;
@property (nonatomic) long long unitType;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDictionary;
- (void)flushCachedValue;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
