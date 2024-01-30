@class ICIAMMessageRule, NSString, ICIAMMetricEvent, ICIAMLocalNotification, NSMutableArray, ICIAMApplicationBadge;

@interface ICIAMApplicationMessage : PBCodable <NSCopying> {
    struct { unsigned char endDate : 1; unsigned char startDate : 1; unsigned char assetPrefetchStrategy : 1; unsigned char globalPresentationPolicyGroup : 1; unsigned char maximumDisplays : 1; unsigned char messageType : 1; unsigned char modalPresentationStyle : 1; unsigned char priority : 1; unsigned char carousel : 1; unsigned char hasCloseButton : 1; unsigned char reportingEnabled : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableArray *targets;
@property (nonatomic) BOOL hasMessageType;
@property (nonatomic) int messageType;
@property (nonatomic) BOOL hasCarousel;
@property (nonatomic) BOOL carousel;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) int priority;
@property (readonly, nonatomic) BOOL hasTemplateURL;
@property (retain, nonatomic) NSString *templateURL;
@property (nonatomic) BOOL hasMaximumDisplays;
@property (nonatomic) int maximumDisplays;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (nonatomic) BOOL hasHasCloseButton;
@property (nonatomic) BOOL hasCloseButton;
@property (retain, nonatomic) NSMutableArray *contentPages;
@property (readonly, nonatomic) BOOL hasRule;
@property (retain, nonatomic) ICIAMMessageRule *rule;
@property (readonly, nonatomic) BOOL hasWebArchiveURL;
@property (retain, nonatomic) NSString *webArchiveURL;
@property (nonatomic) BOOL hasModalPresentationStyle;
@property (nonatomic) int modalPresentationStyle;
@property (nonatomic) BOOL hasGlobalPresentationPolicyGroup;
@property (nonatomic) int globalPresentationPolicyGroup;
@property (nonatomic) BOOL hasAssetPrefetchStrategy;
@property (nonatomic) int assetPrefetchStrategy;
@property (readonly, nonatomic) BOOL hasHoldoutEvent;
@property (retain, nonatomic) ICIAMMetricEvent *holdoutEvent;
@property (readonly, nonatomic) BOOL hasLocalNotification;
@property (retain, nonatomic) ICIAMLocalNotification *localNotification;
@property (readonly, nonatomic) BOOL hasImpressionEvent;
@property (retain, nonatomic) ICIAMMetricEvent *impressionEvent;
@property (retain, nonatomic) NSMutableArray *presentationTriggers;
@property (readonly, nonatomic) BOOL hasApplicationBadge;
@property (retain, nonatomic) ICIAMApplicationBadge *applicationBadge;
@property (nonatomic) BOOL hasReportingEnabled;
@property (nonatomic) BOOL reportingEnabled;

+ (Class)targetType;
+ (Class)presentationTriggersType;
+ (Class)contentPagesType;

- (id)globalPresentationPolicyGroupAsString:(int)a0;
- (unsigned long long)targetsCount;
- (id)presentationTriggersAtIndex:(unsigned long long)a0;
- (void)addContentPages:(id)a0;
- (id)messageTypeAsString:(int)a0;
- (id)targetAtIndex:(unsigned long long)a0;
- (void)clearTargets;
- (unsigned long long)contentPagesCount;
- (id)modalPresentationStyleAsString:(int)a0;
- (int)StringAsGlobalPresentationPolicyGroup:(id)a0;
- (id)assetPrefetchStrategyAsString:(int)a0;
- (unsigned long long)presentationTriggersCount;
- (int)StringAsModalPresentationStyle:(id)a0;
- (void)clearPresentationTriggers;
- (void)addPresentationTriggers:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearContentPages;
- (id)dictionaryRepresentation;
- (id)contentPagesAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)addTarget:(id)a0;
- (unsigned long long)hash;
- (int)StringAsAssetPrefetchStrategy:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsMessageType:(id)a0;
- (void).cxx_destruct;

@end
