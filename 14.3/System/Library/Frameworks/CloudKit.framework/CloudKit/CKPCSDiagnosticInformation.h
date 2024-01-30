@class NSString, NSMutableDictionary, NSMutableArray;

@interface CKPCSDiagnosticInformation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identityInfo;
@property (retain, nonatomic) NSString *serviceIdentityInfo;
@property (retain, nonatomic) NSMutableDictionary *pcsInfoByZoneID;
@property (retain, nonatomic) NSMutableArray *notFoundZoneIDs;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
