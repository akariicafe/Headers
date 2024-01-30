@class NSString, STListData;

@interface STListDataDiff : NSObject <STStatusDomainDataDiff, NSCopying> {
    STListData *_objectsAdded;
    STListData *_objectsRemoved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffFromListData:(id)a0 toListData:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applyToMutableListData:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)diffByApplyingDiff:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)listDataByApplyingToListData:(id)a0;
- (void).cxx_destruct;

@end
