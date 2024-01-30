@class NSURL, SFSearchResult, NSString;
@protocol FCHeadlineProviding;

@interface NTTodayHeadlineProtoitem : NSObject <NTTodayProtoitem>

@property (readonly, copy, nonatomic) id<FCHeadlineProviding> headline;
@property (readonly, copy, nonatomic) SFSearchResult *searchResult;
@property (readonly, copy, nonatomic) NSURL *actionURL;
@property (readonly, copy, nonatomic) NSString *identifier;

- (id)initWithIdentifier:(id)a0 headline:(id)a1 searchResult:(id)a2 actionURL:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)assetHandlesWithOperationInfo:(id)a0;
- (void).cxx_destruct;
- (id)itemWithContentContext:(id)a0 operationInfo:(id)a1 sectionDescriptor:(id)a2 todayData:(id)a3 assetFileURLsByRemoteURL:(id)a4 preferredDynamicSlotAllocation:(unsigned long long)a5;

@end
