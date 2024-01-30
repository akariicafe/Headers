@class NSThread, CoreThemeDocument;

@interface TDThreadMOCOrganizer : NSObject {
    NSThread *mainThread;
    CoreThemeDocument *document;
}

- (id)mainThread;
- (id)init;
- (id)document;
- (id)mainMOC;
- (id)initWithDocument:(id)a0 mainThread:(id)a1;
- (id)threadMOC;
- (void)setThreadMOC:(id)a0;

@end
