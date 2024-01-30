@class NSMutableDictionary, NSDateFormatter;

@interface SGReverseTemplatesJSDataDetectors : NSObject {
    NSMutableDictionary *_scanners;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_naiveDateFormatter;
    NSDateFormatter *_noTimeFormatter;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_result:(struct __DDResult { } *)a0 containsTypes:(id)a1;
- (void)_result:(struct __DDResult { } *)a0 containsTypes:(id)a1 foundTypes:(id)a2;
- (id)runDataDetectors:(id)a0 locale:(id)a1 epoch:(double)a2 metadataForTypes:(id)a3;

@end
