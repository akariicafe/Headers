@class NSString, NSArray, NSURL, NSDate, NSDictionary, PKDynamicTemplateLayout;
@protocol NSCopying;

@interface PKAccountPromotion : NSObject <NSSecureCoding, NSCopying, PKIdentifiable> {
    unsigned long long _state;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *programIdentifier;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *completionSteps;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) BOOL isInTerminalState;
@property (nonatomic) long long impressionCount;
@property (retain, nonatomic) NSURL *termsURL;
@property (retain, nonatomic) NSString *templateIdentifier;
@property (retain, nonatomic) PKDynamicTemplateLayout *layout;
@property (retain, nonatomic) NSDictionary *layoutDictionary;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)_updateState;
- (BOOL)_completed;
- (double)timeRemaining;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)_endDateHasPassed;
- (BOOL)_hasNonZeroProgress;
- (void)_initWithPromotionDictionary:(id)a0;
- (BOOL)_isOngoing;
- (void)_parseLayoutDictionary;
- (BOOL)_startDateHasPassed;
- (BOOL)expiringSoon;
- (void)incrementImpressionCount;
- (BOOL)isEqualToAccountPromotion:(id)a0;
- (id)layoutData;
- (void)resetImpressionCount;
- (void)setLayoutDictionaryFromData:(id)a0;

@end
