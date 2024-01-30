@class PNRPhoneNumberResolutionResultSet;

@interface GEOPhoneNumberResolutionResultSet : NSObject {
    PNRPhoneNumberResolutionResultSet *_pnrResultSet;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithPNRResultSet:(id)a0;
- (void)enumerateResolutionsUsingBlock:(id /* block */)a0;

@end
