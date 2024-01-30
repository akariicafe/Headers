@class RERelevanceEngine;

@interface REElementArchiver : NSObject {
    RERelevanceEngine *_engine;
}

- (void).cxx_destruct;
- (id)initWithEngine:(id)a0;
- (id)_supportedClasses;
- (id)elementWithData:(id)a0;
- (id)dataWithElement:(id)a0;

@end
