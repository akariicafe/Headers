@interface TVLALSDataExtractor : NSObject

- (unsigned int)_displayID;
- (void)extractALSData:(id /* block */)a0;
- (void)extract:(unsigned long long)a0 ALSReadings:(id /* block */)a1;
- (id)extractALSCalibrationData;

@end
