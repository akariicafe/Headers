@class NSNumber, NSDate;

@interface FAScreentimeSettingsObjectCache : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) id introductionModel;
@property (retain, nonatomic) NSNumber *memberDSID;

+ (id)objectWithData:(id)a0;
+ (Class)introductionModelClass;

- (void)encodeWithCoder:(id)a0;
- (id)dataRepresentation;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithIntroductionModel:(id)a0 date:(id)a1 dsid:(id)a2;

@end
