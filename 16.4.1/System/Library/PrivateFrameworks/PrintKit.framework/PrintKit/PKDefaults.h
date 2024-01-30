@interface PKDefaults : NSObject

+ (void)addLastUsedPrinter:(id)a0 duplexMode:(id)a1 lastUsedSize:(struct CGSize { double x0; double x1; })a2 forPhoto:(BOOL)a3;
+ (id)lastUsedPrinters;
+ (id)lastUsedPrintersForPhoto:(BOOL)a0;
+ (void)addLastUsedPrinter:(id)a0 duplexMode:(id)a1 lastUsedSize:(struct CGSize { double x0; double x1; })a2;
+ (long long)printerLookupWithArray:(id)a0 withTimeout:(double)a1 completionHandler:(id /* block */)a2;

@end
