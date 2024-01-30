@class NSString, NSArray, NSDictionary, NSData;

@interface SFUserReportRequest : NSObject <SFUserReportRequest, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *affordanceText;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *dismissText;
@property (copy, nonatomic) NSArray *userReportOptions;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
