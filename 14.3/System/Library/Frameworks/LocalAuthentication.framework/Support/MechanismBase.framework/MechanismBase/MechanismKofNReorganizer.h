@class NSNumber;

@interface MechanismKofNReorganizer : MechanismBase {
    id /* block */ _apply;
}

@property (readonly, nonatomic) long long min;
@property (readonly, nonatomic) long long max;
@property (readonly, nonatomic) NSNumber *k;

- (void).cxx_destruct;
- (void)runWithHints:(id)a0 eventsDelegate:(id)a1 reply:(id /* block */)a2;
- (id)initWithMin:(long long)a0 max:(long long)a1 k:(id)a2 request:(id)a3 apply:(id /* block */)a4;
- (id)reorganizeMechanisms:(id)a0 k:(long long)a1 error:(id *)a2;

@end
