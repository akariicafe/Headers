@class ATXCoreDuetContextHelper;

@interface ATXDNDContextProvider : NSObject {
    ATXCoreDuetContextHelper *_coreDuetContextHelper;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithContextHelper:(id)a0;
- (id)latestDNDTransition;

@end
