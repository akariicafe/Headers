@class NSUUID;

@interface ATXMinimalSlotResolutionParameters : NSObject <NSCopying> {
    unsigned long long _paramHash;
    NSUUID *_slotSetUuid;
}

@property (readonly, nonatomic) unsigned long long slotHash;
@property (readonly, nonatomic) unsigned long long paramCount;

- (id)initWithAction:(id)a0 slots:(id)a1;
- (id)initWithParameterHash:(unsigned long long)a0 slotHash:(unsigned long long)a1 uuid:(id)a2 paramCount:(unsigned long long)a3;
- (id)actionAndSlotSet;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
