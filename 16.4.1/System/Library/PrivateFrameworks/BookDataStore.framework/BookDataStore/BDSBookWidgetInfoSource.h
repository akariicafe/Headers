@interface BDSBookWidgetInfoSource : NSObject <BDSBookWidgetInfoProviding>

- (void)getBookWidgetInfoWithLimit:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
