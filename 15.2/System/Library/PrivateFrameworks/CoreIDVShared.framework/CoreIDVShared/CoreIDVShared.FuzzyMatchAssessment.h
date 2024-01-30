@class NSString;

@interface CoreIDVShared.FuzzyMatchAssessment : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ firstName;
    void /* unknown type, empty encoding */ lastName;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ street;
    void /* unknown type, empty encoding */ dob;
    void /* unknown type, empty encoding */ postalCode;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
