@class NSString, NSDictionary, NSDate;

@interface GEORequestCounterLogInfo : NSObject <NSSecureCoding> {
    NSDictionary *_dict;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *appID;
@property (readonly, nonatomic) struct { int x0; union { int x0; int x1; int x2; } x1; } requestType;
@property (readonly, nonatomic) NSString *requestTypeString;
@property (readonly, nonatomic) unsigned char result;
@property (readonly, nonatomic) NSString *resultString;
@property (readonly, nonatomic) unsigned long long xmitBytes;
@property (readonly, nonatomic) unsigned long long recvBytes;
@property (readonly, nonatomic) NSDate *start;
@property (readonly, nonatomic) NSDate *end;
@property (readonly, nonatomic) unsigned long long usedInterfaceTypes;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)counterLogInfoWithDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void)_appendFormattedStringTo:(id)a0;
- (void)_appendFormattedCSVStringTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
