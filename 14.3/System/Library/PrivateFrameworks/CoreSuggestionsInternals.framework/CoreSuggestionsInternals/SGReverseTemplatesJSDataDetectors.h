@class NSMutableDictionary, NSDateFormatter;

@interface SGReverseTemplatesJSDataDetectors : NSObject {
    NSMutableDictionary *_scanners;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_naiveDateFormatter;
    NSDateFormatter *_noTimeFormatter;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)runDataDetectors:(id)a0 locale:(id)a1 epoch:(double)a2 metadataForTypes:(id)a3;
- (id)_result:(struct __DDResult { } *)a0 containsTypes:(id)a1;
- (void)_result:(struct __DDResult { } *)a0 containsTypes:(id)a1 foundTypes:(id)a2;

@end
