@class NSString;

@interface CoreIDVShared.IdentityLivenessResults : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ livenessLabel;
    void /* unknown type, empty encoding */ assessmentsFAC;
    void /* unknown type, empty encoding */ timestampsFAC;
    void /* unknown type, empty encoding */ assessmentTA;
    void /* unknown type, empty encoding */ maxNccLow;
    void /* unknown type, empty encoding */ maxNccHigh;
    void /* unknown type, empty encoding */ ignoredStitches;
    void /* unknown type, empty encoding */ assessmentsPRD;
    void /* unknown type, empty encoding */ assessmentID;
    void /* unknown type, empty encoding */ timestampsID;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
