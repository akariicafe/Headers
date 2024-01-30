@class PNRPhoneNumberResolutionResultSet;

@interface GEOPhoneNumberResolutionResultSet : NSObject {
    PNRPhoneNumberResolutionResultSet *_pnrResultSet;
}

- (void)enumerateResolutionsUsingBlock:(id /* block */)a0;
- (id)initWithPNRResultSet:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
