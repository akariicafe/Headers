@interface CNTracedLogger : NSObject

- (void)traceLog:(id)a0 withMessage:(struct __asl_object_s { } *)a1;
- (void)traceMessageOnLog:(id)a0 withMessage:(struct __asl_object_s { } *)a1;
- (void)traceKeyValuePairsOnLog:(id)a0 withMessage:(struct __asl_object_s { } *)a1;
- (void)traceLog:(id)a0;

@end
