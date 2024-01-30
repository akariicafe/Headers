@class NSString, NSDictionary, NSArray;

@interface CLSServerAlert : CLSObject {
    long long _displayedCount;
}

@property (nonatomic) long long alertType;
@property (nonatomic) long long displayRoles;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSDictionary *defaultButtonInfo;
@property (copy, nonatomic) NSArray *otherButtonInfos;
@property (nonatomic) long long displayedCount;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
