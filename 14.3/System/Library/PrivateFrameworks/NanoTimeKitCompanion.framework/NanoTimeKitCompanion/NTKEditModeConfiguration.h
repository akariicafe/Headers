@class NTKEditOption, NSMutableDictionary;

@interface NTKEditModeConfiguration : NSObject <NSSecureCoding> {
    NSMutableDictionary *_optionsBySlot;
    NTKEditOption *_nilSlotOption;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)dailySnapshotKey;
- (id)JSONObjectRepresentation;
- (void)setEditOption:(id)a0 forSlot:(id)a1;
- (id)editOptionForSlot:(id)a0;
- (void)enumerateSlotsWithBlock:(id /* block */)a0;
- (id)_alphabeticalSlots;
- (id)initWithJSONObjectRepresentation:(id)a0 editOptionClass:(Class)a1 forDevice:(id)a2;

@end
