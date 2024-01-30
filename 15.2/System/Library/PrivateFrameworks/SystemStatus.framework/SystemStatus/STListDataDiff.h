@class NSString, STListData;

@interface STListDataDiff : NSObject <STStatusDomainDataDiff, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STListData *objectsAdded;
@property (readonly, copy, nonatomic) STListData *objectsRemoved;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffFromListData:(id)a0 toListData:(id)a1;

- (id)diffByApplyingDiff:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithObjectsAdded:(id)a0 objectsRemoved:(id)a1;
- (id)listDataByApplyingToListData:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)applyToMutableListData:(id)a0;

@end
