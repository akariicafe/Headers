@class ATXHeuristicDevice;

@interface ATXBestTimeToInteractWithContactDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)hourOfDayInteractionProbabilitiesWithContact:(id)a0 callback:(id /* block */)a1;

@end
