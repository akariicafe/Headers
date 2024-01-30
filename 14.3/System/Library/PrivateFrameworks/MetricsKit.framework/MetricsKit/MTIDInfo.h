@class NSString, MTIDSecret, NSDictionary, NSDate, MTIDScheme, NSNumber;

@interface MTIDInfo : NSObject <MTID>

@property (retain, nonatomic) MTIDScheme *scheme;
@property (retain, nonatomic) MTIDSecret *secret;
@property (copy, nonatomic) NSString *idString;
@property (copy, nonatomic) NSNumber *dsId;
@property (copy, nonatomic) NSDate *effectiveDate;
@property (copy, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL isSynchronized;
@property (retain, nonatomic) NSDate *computedDate;
@property (readonly, copy, nonatomic) NSString *idNamespace;
@property (readonly, nonatomic) long long idType;
@property (readonly, nonatomic) double lifespan;
@property (readonly, copy, nonatomic) NSDictionary *metricsFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)debugInfo;
- (id)initWithScheme:(id)a0 secret:(id)a1 idString:(id)a2 dsId:(id)a3 effectiveDate:(id)a4 expirationDate:(id)a5;
- (BOOL)isValueExpired;

@end
