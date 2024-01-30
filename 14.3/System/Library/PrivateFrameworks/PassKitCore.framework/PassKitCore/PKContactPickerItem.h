@class NSString, NSArray, NSMutableSet;

@interface PKContactPickerItem : NSObject <NSSecureCoding> {
    NSMutableSet *_acceptedValues;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *submissionValue;
@property (readonly, nonatomic) NSArray *alternativeAcceptedValues;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)acceptedValues;
- (BOOL)isValueAccepted:(id)a0;

@end
