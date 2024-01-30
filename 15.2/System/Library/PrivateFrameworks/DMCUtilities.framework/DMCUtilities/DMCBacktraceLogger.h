@interface DMCBacktraceLogger : NSObject

+ (id)callerOfCurrentMethod;
+ (BOOL)dumpStackshotToPath:(id)a0 fileName:(id)a1;

@end
