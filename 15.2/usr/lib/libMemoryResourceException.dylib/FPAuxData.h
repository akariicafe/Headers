@interface FPAuxData : NSObject <FPAuxDataType>

@property (readonly, nonatomic) long long value;
@property (readonly, nonatomic, getter=shouldAggregate) BOOL aggregate;
@property (readonly, nonatomic) BOOL isContainer;
@property (readonly, nonatomic) id jsonRepresentation;

- (id)initWithValue:(long long)a0 shouldAggregate:(BOOL)a1;

@end
