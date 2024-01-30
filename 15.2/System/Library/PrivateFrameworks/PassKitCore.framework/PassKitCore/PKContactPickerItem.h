@class NSString, NSArray, NSMutableSet;

@interface PKContactPickerItem : NSObject <NSSecureCoding> {
    NSMutableSet *_acceptedValues;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *submissionValue;
@property (readonly, nonatomic) NSArray *alternativeAcceptedValues;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)acceptedValues;
- (void).cxx_destruct;
- (BOOL)isValueAccepted:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
