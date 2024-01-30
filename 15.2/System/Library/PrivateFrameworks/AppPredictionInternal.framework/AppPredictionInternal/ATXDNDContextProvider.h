@class ATXCoreDuetContextHelper;

@interface ATXDNDContextProvider : NSObject {
    ATXCoreDuetContextHelper *_coreDuetContextHelper;
}

- (void).cxx_destruct;
- (id)init;
- (id)latestDNDTransition;
- (id)initWithContextHelper:(id)a0;

@end
