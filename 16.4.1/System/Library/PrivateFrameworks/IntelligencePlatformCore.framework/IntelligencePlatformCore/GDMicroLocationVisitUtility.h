@class BMStream;

@interface GDMicroLocationVisitUtility : NSObject {
    BMStream *_microLocationVisitStream;
}

- (void).cxx_destruct;
- (id)_rawMicroLocationVisitEventPublisherFrom:(id)a0 to:(id)a1 reversed:(BOOL)a2;
- (id)initWithMicroLocationVisitStream:(id)a0;
- (id)lastMicroLocationVisitEventPriorTo:(id)a0;
- (id)microLocationVisitEventPublisherFrom:(id)a0 to:(id)a1;

@end
