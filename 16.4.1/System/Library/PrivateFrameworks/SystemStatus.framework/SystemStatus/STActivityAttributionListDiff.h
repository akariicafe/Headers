@class NSString, STListDataDiff;

@interface STActivityAttributionListDiff : NSObject <STStatusDomainDataDiff, NSCopying> {
    STListDataDiff *_listDataDiff;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffFromList:(id)a0 toList:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)listByApplyingToList:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)diffByApplyingDiff:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)applyToMutableList:(id)a0;
- (void).cxx_destruct;

@end
