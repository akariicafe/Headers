@class NSString, STListDataDiff;

@interface STCallingStatusDomainDataDiff : NSObject <STStatusDomainDataDiff> {
    STListDataDiff *_callDescriptorListDataDiff;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diffFromData:(id)a0 toData:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCallDescriptorListDataDiff:(id)a0;
- (id)dataByApplyingToData:(id)a0;
- (id)diffByApplyingDiff:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)applyToMutableData:(id)a0;
- (void).cxx_destruct;

@end
