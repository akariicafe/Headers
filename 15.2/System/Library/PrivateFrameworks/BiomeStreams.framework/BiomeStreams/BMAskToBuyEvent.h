@class NSString, NSNumber;

@interface BMAskToBuyEvent : BMEventBase <BMStoreData, BMProtoBufWrapper>

@property (nonatomic) int status;
@property (nonatomic) double eventTime;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *actionUserID;
@property (copy, nonatomic) NSString *itemTitle;
@property (copy, nonatomic) NSString *itemDescription;
@property (copy, nonatomic) NSString *thumbnailPath;
@property (copy, nonatomic) NSString *itemLocalizedPrice;
@property (copy, nonatomic) NSNumber *itemStarRating;
@property (copy, nonatomic) NSString *itemAgeRating;
@property (copy, nonatomic) NSString *productType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)serialize;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)proto;
- (id)encodeAsProto;
- (id)json;
- (id)jsonDict;
- (id)initWithRequestID:(id)a0 status:(int)a1 eventTime:(double)a2 userID:(id)a3 actionUserID:(id)a4 itemTitle:(id)a5 itemDescription:(id)a6 itemLocalizedPrice:(id)a7 thumbnailPath:(id)a8 ageRating:(id)a9 starRating:(id)a10 productType:(id)a11;
- (BOOL)validNonOptionalProperty:(id)a0 propertyName:(id)a1;
- (id)initWithRequestID:(id)a0 status:(int)a1 eventTime:(double)a2 userID:(id)a3 actionUserID:(id)a4 itemTitle:(id)a5 itemDescription:(id)a6 itemLocalizedPrice:(id)a7 thumbnailPath:(id)a8 ageRating:(id)a9 starRating:(id)a10;

@end
