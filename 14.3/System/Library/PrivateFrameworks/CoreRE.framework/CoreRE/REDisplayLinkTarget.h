@interface REDisplayLinkTarget : NSObject {
    struct DisplayLinkClock { void /* function */ **x0; BOOL x1; BOOL x2; double x3; double x4; float x5; float x6; float x7; struct Event<re::SimulationClock, const re::SimulationClockEventArgs &> { struct DynamicArray<re::Event<re::SimulationClock, const re::SimulationClockEventArgs &>::Subscription> { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct Subscription *x4; } x0; struct DynamicArray<re::Event<re::SimulationClock, const re::SimulationClockEventArgs &>::SubscriptionLegacy> { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct SubscriptionLegacy *x4; } x1; } x8; struct Queue { id x0; } x9; id x10; double x11; } *_clock;
}

- (void)update;
- (id)initWithClock:(struct DisplayLinkClock { void /* function */ **x0; BOOL x1; BOOL x2; double x3; double x4; float x5; float x6; float x7; struct Event<re::SimulationClock, const re::SimulationClockEventArgs &> { struct DynamicArray<re::Event<re::SimulationClock, const re::SimulationClockEventArgs &>::Subscription> { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct Subscription *x4; } x0; struct DynamicArray<re::Event<re::SimulationClock, const re::SimulationClockEventArgs &>::SubscriptionLegacy> { struct Allocator *x0; unsigned long long x1; unsigned long long x2; unsigned int x3; struct SubscriptionLegacy *x4; } x1; } x8; struct Queue { id x0; } x9; id x10; double x11; } *)a0;
- (void)updateOnQueue;

@end
