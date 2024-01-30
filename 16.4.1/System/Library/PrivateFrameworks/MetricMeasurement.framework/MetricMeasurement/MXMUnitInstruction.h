@interface MXMUnitInstruction : NSDimension

@property (class, readonly, copy, nonatomic, getter=baseUnit) MXMUnitInstruction *instructions;
@property (class, readonly, copy, nonatomic) MXMUnitInstruction *kiloInstructions;
@property (class, readonly, copy, nonatomic, getter=kiloInstructions) MXMUnitInstruction *kI;
@property (class, readonly, copy, nonatomic) MXMUnitInstruction *megaInstructions;
@property (class, readonly, copy, nonatomic, getter=megaInstructions) MXMUnitInstruction *mI;
@property (class, readonly, copy, nonatomic) MXMUnitInstruction *gigaInstructions;


@end
